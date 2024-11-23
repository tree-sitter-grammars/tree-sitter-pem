//! This crate provides PEM language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [LANGUAGE][] constant to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! -----BEGIN EC PARAMETERS-----
//! BgUrgQQAIg==
//! -----END EC PARAMETERS-----
//! -----BEGIN EC PRIVATE KEY-----
//! MIGkAgEBBDB5Aias9e2t4oAPDe3ooTEAcWBuXGZwdE6jKhNDkl1nkVqc3d7GDCjZ
//! ZpIJlCcqif2gBwYFK4EEACKhZANiAASh2H+X0rMwJ5lVQ4DTs5C34HKslkz/o1Ri
//! gvRNjNLQ540QdgHUJp/vxn08KQBZyiTaXCghcBzXDZY9xDgvC5sUJWKGB31Ontk2
//! Qbumz+SZu08d1Y3T3OVC2NGqxOzfHmg=
//! -----END EC PRIVATE KEY-----
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_pem::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading PEM parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_pem() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for this grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_pem) };

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

/// The syntax highlighting queries.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading PEM parser");
    }
}

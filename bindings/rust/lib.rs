//! This crate provides pem language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
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
//! parser.set_language(tree_sitter_pem::language()).expect("Error loading pem grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_pem() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_pem() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::language())
            .expect("Error loading pem language");
    }
}

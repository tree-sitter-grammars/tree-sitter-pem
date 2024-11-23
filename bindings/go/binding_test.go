package tree_sitter_pem_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_pem "github.com/tree-sitter-grammars/tree-sitter-pem/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pem.Language())
	if language == nil {
		t.Errorf("Error loading PEM grammar")
	}
}

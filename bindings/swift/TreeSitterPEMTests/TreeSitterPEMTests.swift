import XCTest
import SwiftTreeSitter
import TreeSitterPEM

final class TreeSitterPEMTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_pem())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading PEM grammar")
    }
}

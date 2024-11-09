"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.library = void 0;
var library = /** @class */ (function () {
    function library(t, c, cp) {
        var _this = this;
        this.issue = function (code, copies) {
            console.log("this book code: " + _this.book_title);
            console.log("this book code: " + code);
            console.log("this book copies: " + copies);
            _this.book_copies = copies - 1;
            console.log("the book copies after recent issue: " + _this.book_copies);
        };
        this.book_return = function (code, copies) {
            console.log("this book code: " + _this.book_title);
            console.log("this book code: " + code);
            console.log("this book copies: " + copies);
            _this.book_copies = copies + 1;
            console.log("the book copies after recent return: " + _this.book_copies);
        };
        this.book_title = t;
        this.book_code = c;
        this.book_copies = cp;
    }
    return library;
}());
exports.library = library;

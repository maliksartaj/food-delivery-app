var Book = /** @class */ (function () {
    function Book(t, a, p) {
        var _this = this;
        this.show_book = function () {
            console.log("My new book is on:: " + _this.title + "written by:: " + _this.author + " bought at INR::" + _this.price);
        };
        this.title = t;
        this.author = a;
        this.price = p;
    }
    return Book;
}());
var b = new Book("ABC", "XYZ", 20);
b.show_book();

"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var fourth_1 = require("./fourth");
var lib1 = new fourth_1.library("My Book", "B1", 5);
//lib1.inputs();
lib1.issue("B1", 5);
var lib2 = new fourth_1.library("MyNewBook", "B2", 5);
//lib2.inputs();
lib2.book_return("B2", 10);
var lib3 = new fourth_1.library("MyCurrentBook", "B3", 6);
//lib3.inputs();
lib3.book_return("B3", 15);
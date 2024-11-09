import {library} from './fourth';
let lib1=new library("My Book","B1",5);
//lib1.inputs();
lib1.issue("B1",5);

let lib2=new library("MyNewBook","B2",5);
//lib2.inputs();
lib2.book_return("B2",10);

let lib3=new library("MyCurrentBook","B3",6);
//lib3.inputs();
lib3.book_return("B3",15);



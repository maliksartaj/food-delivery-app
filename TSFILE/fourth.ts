export class library{
    book_title:string;book_code:string;book_copies:number;
    constructor(t:string,c?:string,cp?:number)
    {
        this.book_title=t;
        this.book_code=c;
        this.book_copies=cp;
 }
 issue=(code:string,copies:number)=>
 {
    console.log("this book code: "+this.book_title);
    console.log("this book code: "+code);
    console.log("this book copies: "+copies);
    this.book_copies=copies-1
    console.log("the book copies after recent issue: "+this.book_copies);
 }
 book_return=(code:string,copies:number)=>
    {
       console.log("this book code: "+this.book_title);
       console.log("this book code: "+code);
       console.log("this book copies: "+copies);
       this.book_copies=copies+1
       console.log("the book copies after recent return: "+this.book_copies);
    }
}
class Book
{
    title:string;
    author:string;
    price:number;

    constructor(t:string,a:string,p:number)
    {
        this.title=t;   
        this.author=a    
        this.price=p;
    }
    show_book = ()=>{
        console.log("My new book is on:: "+this.title+" written by:: "+this.author+" bought at INR::" +this.price);
        }
    }
 let b=new Book("ABC","XYZ",20);
 b.show_book();   

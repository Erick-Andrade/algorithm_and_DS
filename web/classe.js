class Book {
    constructor(name, author, year) {
        this.name = name;
        this.author = author;
        this.year = year;
    }

    // métodos
    age() {
        let date = new Date();
        return date.getFullYear() - this.year;
    }

    description() {
        return `O livro "${this.name}" foi escrito por "${this.author}" e faz ${this.age()} ano(s) que foi lançado`;
    }


}

let bookOne = new Book("O universo numa casca de noz", "Stephen Hawking", 2001);
console.log(bookOne);

console.log(bookOne.age());
console.log(bookOne.description());

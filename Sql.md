1. Create a database with name of "books_shop_db".
Create a table with the name of "books"  and fields are:
book_id, title, author_first_name, author_last_name, release_year, stock_quantity, pages.


=> create books_shop_db;
=> create table books(book_id int(10),title varchar(50), author_first_name varchar(50), author_last_name varchar(50), release_year int(4), stock_quantity int(4), pages int(4));

![alt text](<MySQL 8.0 Command Line Client 23-09-2024 01_25_35.png>) 

--------------------------------------------------------------------------------------------------------------------------------------

2. Insert Values in the table books

=> insert into books 
values(1,'The Namesake','Jhumpa','Lahri',2003,32,291),
(2,'The Norse Mythology','Neil','Gaiman',2016,43,304),
(3,'American Gods','Neil','Gaiman',2001,12,465),
(4,'Interpreter of Maladies','Jhumpa','Lahri',1996,97,198),
(5,'A Hologram for the king: A Novel','Dave','Eggers',2012,154,352),
(6,'The Circle','Dave','Eggers',2013,28,504),
(7,'The Amazing Adventures of Kavalier & Clay','Michael','Chabon',2000,68,634),
(8,'Just Kids','Patti','Smith',2010,55,304),
(9,'A Heartbreaking Work of Staggering Genius','Dave','Eggers',2001,104,437),
(10,'Coraline','Neil','Gaiman',2003,100,208),
(11,'What We TAlk About When We Talk About Love:Stories','Raymond','Carver',1981,23,176),
(12,'Where I am Calling From: Selected Stories','Raymond','Carver',1989,12,526),
(13,'White Noise','Don','Delillo',1985,49,325),
(14,'Cannery Row','John','Steinbeck',1945,95,181),
(15,'Oblivion: Stories','Foster','Wallace',2004,172,329),
(16,'Consider the Lobster','Foster','Wallace',2005,92,143);

![alt text](<MySQL 8.0 Command Line Client 23-09-2024 01_24_45.png>)

---------------------------------------------------------------------------------------------------------------------------------------

3. Write SQL query to fetch title, release_year, author_fname, author_lname from books table.

=> select title,release_year,author_first_name, author_last_name from books ;

![alt text](<MySQL 8.0 Command Line Client 23-09-2024 19_34_00.png>)

---------------------------------------------------------------------------------------------------------------------------------------
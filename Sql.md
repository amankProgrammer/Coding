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

4. Write the SQL queries to update the author_last_name whose write the book "Coraline".

=> update books 
   set author_last_name = 'Armstrong' 
   where title = 'Coraline';

![alt text](<MySQL 8.0 Command Line Client 25-09-2024 11_17_20.png>)

---------------------------------------------------------------------------------------------------------------------------------------

5. Write the SQL queries to fetch unique author_first_name and author_last_name.

=> select distinct author_first_name,author_last_name from books;

![alt text](<MySQL 8.0 Command Line Client 25-09-2024 11_31_22.png>)

---------------------------------------------------------------------------------------------------------------------------------------

6. Delete books details where books pages are less than 200.

=> delete from books where (pages < 200);

![alt text](<MySQL 8.0 Command Line Client 26-09-2024 19_51_06.png>)

---------------------------------------------------------------------------------------------------------------------------------------

7. Write a query to fetch only those records from the books table whose pages is above 400.

=> select * from books where (pages > 400);

![alt text](<MySQL 8.0 Command Line Client 26-09-2024 19_56_30.png>)

---------------------------------------------------------------------------------------------------------------------------------------

8. Write a sql query to Reverse and uppercase the following sentence: "Why does my cat look at me with such hatered"?

=> select upper('Why does my cat look at me with such hatered') as upper_case;
=> select reversed('Why does my cat look at me with such hatered') as reverse_sentence;

![alt text](<MySQL 8.0 Command Line Client 28-09-2024 22_04_59.png>)

---------------------------------------------------------------------------------------------------------------------------------------

9. Write a sql query to print original author_last_name and reverse_last_name as the forward and backward names?

=> select author_last_name, reverse(author_last_name) as backward from books;

![alt text](<MySQL 8.0 Command Line Client 28-09-2024 22_24_12.png>)

---------------------------------------------------------------------------------------------------------------------------------------

10. Write a sql queries to combine the author_first_name and author_last_name and print with title, release_year and stock_quantity.

=> select concat(author_first_name,' ',author_last_name) as author_full_name,title,release_year,stock_quantity from books;

![alt text](<MySQL 8.0 Command Line Client 29-09-2024 00_08_47.png>)

---------------------------------------------------------------------------------------------------------------------------------------

11. Write a sql queries to combine the author_first_name and author_last_name in caps and print with title, pages and stock_quantity.

=> select upper(concat(author_first_name,' ',author_last_name)) as author_full_name,title,release_year,stock_quantity from books;

![alt text](<MySQL 8.0 Command Line Client 29-09-2024 00_13_44.png>)

---------------------------------------------------------------------------------------------------------------------------------------

12. Write a query to concat title and release year like that "title was release in release year" the value of title and release year fetch from the books table.

=> select concat(title,' was release in ',release_year) as description from books;

![alt text](<MySQL 8.0 Command Line Client 29-09-2024 12_22_41.png>)

---------------------------------------------------------------------------------------------------------------------------------------

13. Write a query to print book title and length of each title.

=> select title,length(title) as titleLength from books;

![alt text](<MySQL 8.0 Command Line Client 29-09-2024 12_29_41.png>)

---------------------------------------------------------------------------------------------------------------------------------------



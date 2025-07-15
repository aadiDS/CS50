-- $ sqlite3 favorites.db
-- Are you sure want to create favorites.db? [y/N] y
-- sqlite> .mode csv
-- sqlite> .quit
-- $ ls favorites.csv favorites.db
-- favorites.csv favorites.db

SELECT * FROM favorites;

 SELECT language FROM favorites LIMIT 10;

 SELECT COUNT(*) FROM favorites;

 SELECT COUNT(language) FROM favorites;

 SELECT COUNT(problem) FROM favorites;

 SELECT COUNT(*) FROM favorites;

 SELECT DISTINCT(language) FROM favorites;

 SELECT COUNT(DISTINCT(language)) FROM favorites;

 SELECT COUNT(*) FROM favorites WHERE language = 'C';

 SELECT COUNT(*) FROM favorites WHERE language = 'C' AND problem = 'Hello, World';

 SELECT language, COUNT(*) FROM favorites GROUP BY language;

 SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*);

 SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*) DESC;

 SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY n DESC LIMIT 1;

 SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY n DESC LIMIT 1;

 SELECT * FROM favorites;

 DELETE FROM favorites WHERE Timestamp IS NULL;

 SELECT * FROM favorites;


$ sqlite3 shows.db

 SELECT * FROM shows LIMIT 10;
 SELECT COUNT(*) FROM shows;
 SELECT * FROM ratings WHERE rating>= 6.0 LIMIT 10;


  

-- lists the number of records with the same score in the table second_table of the database
-- display the score, number of records for score with label 'number'
-- sort 'number' in descending order
SELECT score, COUNT(*) AS number FROM second_table
GROUP BY score
ORDER BY number DESC;

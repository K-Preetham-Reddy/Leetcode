# Write your MySQL query statement below
SELECT person_name
FROM Queue Q
WHERE 1000-(SELECT SUM(M.weight) FROM Queue M WHERE M.turn<=Q.turn )>=0
ORDER BY Q.turn DESC
LIMIT 1;

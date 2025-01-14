# Write your MySQL query statement below
SELECT s1.id,IFNULL((SELECT (s2.student) FROM Seat s2 WHERE s2.id=IF(s1.id%2=0,s1.id-1,s1.id+1)),s1.student) AS student
FROM Seat s1
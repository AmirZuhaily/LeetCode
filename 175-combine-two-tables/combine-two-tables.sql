# Write your MySQL query statement below
SELECT
    t1.firstName,
    t1.lastName,
    t2.city,
    t2.state
FROM Person AS t1
LEFT JOIN Address AS t2
ON t1.personID = t2.personID;
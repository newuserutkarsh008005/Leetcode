-- Write your PostgreSQL query statement below
select tweet_id from Tweets where CHAR_Length(content)>15;
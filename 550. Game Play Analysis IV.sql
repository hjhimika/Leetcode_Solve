
with firstLogin as (
    select player_id, min(event_date) as f_login_date
    from Activity group by player_id
),
nextLogin as (
    select fl.player_id from firstLogin fl
    join Activity a
    on fl.player_id = a.player_id
    and a.event_date = fl.f_login_date + INTERVAL '1 day'

)
select round( count(DISTINCT nl.player_id )* 1.0 / count(DISTINCT fl.player_id) ,2) as fraction
from firstLogin fl left join nextLogin nl
on fl.player_id = nl.player_id;

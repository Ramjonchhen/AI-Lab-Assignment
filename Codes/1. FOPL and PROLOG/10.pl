criminal(PER):-sells_weapon(PER,WEP,CON),
				american(PER),
				country(CON),
				weapon(WEP),
				has_weapon(CON,WEP),
				hostile_country(CON).
hostile_country(CON):-enemy_of_usa(CON).
has_weapon(iraq,missile).
sells_weapon(george,missile,iraq).
american(george).
country(iraq).
enemy_of_usa(iraq).
weapon(missile).


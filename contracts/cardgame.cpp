#include "gameplay.cpp"

void cardgame::login(name username) {
	require_auth(username);

	auto user iterator = _users.find(username.value);
	if (user_iterator == _useers.end()) {
		user iterator = _users.emplace(username, [&](auto& new_user) {
				new_user.username =username;
		});
}
EOSIO_DISPATCH(cardgame, (login))





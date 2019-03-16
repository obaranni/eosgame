1. get chain_id EOS
cleos get info
{
  "server_version": "ea08cfd3",
  "chain_id": "cf057bbfb72640471fd910bcb67639c22df9f92470936cddc1ade0e2f2e7dc4f",
  "head_block_num": 20318,
  "last_irreversible_block_num": 20317,
  "last_irreversible_block_id": "00004f5da8de1238e1462a853dec46b041605db86bf677c13923766d08c4c154",
  "head_block_id": "00004f5e6cc2e8ff536534360b366f2b5eae18f6ada2fd7cb64113a13302ddc5",
  "head_block_time": "2019-03-15T14:19:28.000",
  "head_block_producer": "eosio",
  "virtual_block_cpu_limit": 200000000,
  "virtual_block_net_limit": 1048576000,
  "block_cpu_limit": 199900,
  "block_net_limit": 1048576,
  "server_version_string": "v1.5.0"
}


2. generate a pair of keys (public private) (eosjs)
cleos create key --to-console
Private key: 5HqXc3nDtgSFWPA2Eu58rAJFeKkVJoYMB15btPY3Di5UNrfjwXz
Public key: EOS76Cab4ZN4RAb9ZCHHqJHQ8LtmSRTVGPeWA7P4oSpLHbXKtK7Xv 


3. get all Block Producers (BPs) in the network
cleos get schedule
active schedule version 0
    Producer      Producer key
    ============= ==================
    eosio         EOS6MRyAjQq8ud7hVNYcfnVPJqcVpscN5So8BhtHuGYqET5GDW5CV

pending schedule empty

proposed schedule empty



4. install scatter and cleos, create accounts in testnet (find a purse that supports testnet, find a way to create accounts in testnet, get yourself test EOS)

scatter mnemonic: pigeon tonight priority mass arrive dragon second child cook modify boost swear
curl -s https://jungle2.cryptolions.io/v1/chain/get_currency_balance -X POST -d '{"code": "eosio.token", "account": "xteamsxteams"}'
["100.0000 EOS","100.0000 JUNGLE"]



5. find the top 21 (eos system table 

cleos -u http://jungle2.cryptolions.io:80 system listproducers | head -n 22

lioninjungle  EOS5g7gVXGeQVCTNW7U3gxeBJuvzvkmbCLioNqTUPYLjQXFGfQXfo     https://cryptolions.io                                      0.1588
alohaeostest  EOS7r5MsqVU5x9N95crSXbELK48MasNT1Daq9FQsW97wRJDM595wb     https://www.alohaeos.com/                                   0.0376
mosquitometa  EOS5YB3npnbWxVZqXUi7tVHLoPwjq67WRHaNELEkgqQyYrPALZjiq     https://eosmetal.io                                         0.0369
ohtigertiger  EOS7tigERwXDRuHsok212UDToxFS1joUhAxzvDUhRof8NjuvwtoHX     https://cryptolions.io                                      0.0367
eosphereiobp  EOS7TTJ2LsMPbCPsRJSxL2PhhHBqg8xNfV3MtBcx7gzYxH27YGSHh     https://eosphere.io                                         0.0365
junglesweden  EOS79e4HpvQ1y1HdzRSqE1gCKhdN9kFGjjUU2nKG7xjiVCakt5WSs     http://zverige.com/kingkong/                                0.0362
eosdacserval  EOS5CJJEKDms9UTS7XBv8rb33BENRpnpSGsQkAe6bCfpjHHCKQTgH     https://eosdac.io                                           0.0361
eos42panther  EOS8hPoDfJWxAHSkBkYH8fhkcjAz7a3yQ85W3L8RgwBw5aBt92vDQ     https://eos42.io/                                           0.0361
junglemorpho  EOS796kTMQF9sTjFz6cRftBXpxfH4aRSkSt9XSUV9hRxyxFkVgA2y     https://eoscostarica.io                                     0.0361
tokenika4tst  EOS6wkp1PpqQUgEA6UtgW21Zo3o1XcQeLXzcLLgKcPJhTz2aSF6fz     https://tokenika.io/                                        0.0361
eosbarcelona  EOS8N1MhQpFQR3YABzVp4woPBywQnS5BunJtHv8jxtNQGrGEiTBhD     https://eos.barcelona                                       0.0361
eosnationftw  EOS8YhQPU6agWNfXYswnyM5fLaLecoriyD1H5Ckr3R95Z38eWZ9qg     https://bp.eosnation.io                                     0.0361
eoscafeloons  EOS6XgXr6zGhyk6p2rSHrizUYCnhHCMjz3NuvBFGRATLUueBFC2tv     https://eoscafeblock.com                                    0.0361
atticlabjbpn  EOS5hVMcN6UVWtrNCxdp5HJwsz4USULmdfNA22UDyjRNdprXEiAP6     https://AtticLab.Net                                        0.0361
blockchained  EOS6VG88TsufLFhHYJscqXYQWFWgDCHUBYtvk6eXvpxEuYV9MUKGk     https://eos.blckchnd.com                                    0.0357
eosiodetroit  EOS5KoSVp3ktJ6BZ8G5gdAg19BwtUrmJDbAZ73KYip3uqrjnhSQby     http://eosdetroit.io                                        0.0357
jungleswedem  EOS79e4HpvQ1y1HdzRSqE1gCKhdN9kFGjjUU2nKG7xjiVCakt5WSs     http://zverige.com/kingkong/                                0.0356
ysignnodeacc  EOS7J7Wj23H7GPhR5kqy56GP3Nc6BZZPd1WXnVBARgyJ1h2HNzmPD     https://ysign.io                                            0.0350
gnuargentina  EOS84gipb2XWGZfVmm1jrYnTVNeS45Pq5pk3VN9Yk8wAyHGDKUJG2     https://eosargentina.io                                     0.0349
eosamsterdam  EOS65kKLaG5gqjHqqa6accj96Qsf2BcP4h9tqw423u9HbywpMhMBJ     https://eosamsterdam.net/                                   0.0325
batinthedark  EOS6dwoM8XGMQn49LokUcLiony7JDkbHrsFDvh5svLvPDkXtvM7oR     Free Place                                                  0.0111

curl -i -X POST    -H "Content-Type:application/json"    -d '{
  "scope": "eosio",
  "code": "eosio",
  "table": "producers",
  "json": "true",
  "limit": 9999
}'  'http://jungle2.cryptolions.io/v1/chain/get_table_rows'

{"rows": [
		{"owner":"alohaaaaaaaa","total_votes":"361492659342.85827636718750000","producer_key":"EOS79e4HpvQ1y1HdzRSqE1gCKhdN9kFGjjUU2nKG7xjiVCakt5WSs","is_active":1,"url":"http://zverige.com/kingkong/","unpaid_blocks":0,"last_claim_time":"2018-11-29T17:07:07.000","location":752},
		...
	]
}


6. vote for a pair of BP (copy the result of the action 


cleos -u http://jungle2.cryptolions.io:80 system delegatebw xteamsxteams hippopotamus "1 EOS" "1 EOS"
executed transaction: 1574c5d8e1fc6be3910e98f3a36ed9d94141a3f1c465ca49e2d4a5e707cf6a10  144 bytes  542 us
#         eosio <= eosio::delegatebw            {"from":"xteamsxteams","receiver":"hippopotamus","stake_net_quantity":"1.0000 EOS","stake_cpu_quanti...
#   eosio.token <= eosio.token::transfer        {"from":"xteamsxteams","to":"eosio.stake","quantity":"2.0000 EOS","memo":"stake bandwidth"}
#  xteamsxteams <= eosio.token::transfer        {"from":"xteamsxteams","to":"eosio.stake","quantity":"2.0000 EOS","memo":"stake bandwidth"}
#   eosio.stake <= eosio.token::transfer        {"from":"xteamsxteams","to":"eosio.stake","quantity":"2.0000 EOS","memo":"stake bandwidth"}


7. calculate how much EOS gets per day top 3 B 

	eoslaomaocom	https://eoslaomao.com	111,322,688		2.01 %	752 EOS
	eosliquideos	http://vote.liquideos.com	106,329,067	1.92 %	733 EOS
	eoshuobipool	http://eoshuobipool.com	105,322,048		1.91 %	729 EOS

	https://medium.com/eostribe/how-eos-block-producers-are-paid-7b2a1216eb2b

	((25% of daySupply / activeProducersCount) * producersCount) + ((75% of daySupply) / 100) * (bp1% + bp2% + bp3%) 
		= ((6679 / 21)) * 3 + ((20037 / 100) * (2.01 + 1.92 + 1.91)) = (318 * 3) + (200 * 5.83) = 954 + 1166 = 2120 EOS


8. find the formula for calculating the vote decay for the account

	https://medium.com/@auroraeos/understanding-eos-vote-decay-e50c58b56658
	EOS votes have a half-life of one year, meaning that a voters power decreases by about 50% after one year and falls to zero after two years.


9. create another permission for your own one (copy the result of the action 

	https://medium.com/coinmonks/eos-permission-management-2c0c1634fe39
	cleos -u http://jungle2.cryptolions.io:80 set account permission xteamsxteams claimer '{"threshold":1, "keys":[{"key":"EOS6q369YQagTWV4xJbrS1orTzV1q8aSFS4K9aTmhnqAeazwMPuwB", "weight":1}]}' "active" -p xteamsxteams@active
executed transaction: 58362a4cd9b38b9f99c816bc21c411489876a325c94c54c57d9a1c4d7cc85121  160 bytes  275 us
#         eosio <= eosio::updateauth            {"account":"xteamsxteams","permission":"claimer","parent":"active","auth":{"threshold":1,"keys":[{"k...
warning: transaction executed locally, but may not be confirmed by the network yet         ]	

cleos -u http://jungle2.cryptolions.io:80 get account xteamsxteams
created: 2019-03-15T14:35:39.500
permissions:
     owner     1:    1 EOS76Cab4ZN4RAb9ZCHHqJHQ8LtmSRTVGPeWA7P4oSpLHbXKtK7Xv
        active     1:    1 EOS76Cab4ZN4RAb9ZCHHqJHQ8LtmSRTVGPeWA7P4oSpLHbXKtK7Xv
           claimer     1:    1 EOS6q369YQagTWV4xJbrS1orTzV1q8aSFS4K9aTmhnqAeazwMPuwB


10. create Block Producer (copy the result of the action 

	cleos -u http://jungle2.cryptolions.io:80 system regproducer xteamsxteams EOS76Cab4ZN4RAb9ZCHHqJHQ8LtmSRTVGPeWA7P4oSpLHbXKtK7Xv
	executed transaction: 74701bc42aededfd8b59c7d006e6adef52d0bb177531a0024df77871f317a43e  144 bytes  419 us
#         eosio <= eosio::regproducer           {"producer":"xteamsxteams","producer_key":"EOS76Cab4ZN4RAb9ZCHHqJHQ8LtmSRTVGPeWA7P4oSpLHbXKtK7Xv","u...
warning: transaction executed locally, but may not be confirmed by the network yet         ]

11. API to find the action (get_action) in which the transaction with the voice that you made in the task abov 

	curl -s https://history.cryptolions.io/v1/histor "xteamsxteams"}'POST -d '{"account":
{"actions":[{"_id":"5c876696b5035b4e794ad053","receipt":{"receiver":"eosknightsio","act_digest":"005aec57968f7ee54d944f82bec08b1c3b77309b171ca874fbc07dc1a21f65d9","global_sequence":"5534563841","recv_sequence":34767537,"auth_sequence":[["novapromote1",416]],"code_sequence":158,"abi_sequence":158},"act":{"account":"eosknightsio","name":"getnova","authorization":[{"actor":"novapromote1","permission":"active"}],"data":{"from":"undefined","memo":""},"hex_data":"0000486abaa5d2d400"},"context_free":false,"elapsed":292,"console":"","trx_id":"9ee57d00a5d54fc8ce9bde8aeea08160c7c886bed44cd69c3817059b3de2f189","block_num":47189126,"block_time":"2019-03-12T07:58:14.000","producer_block_id":"02d00c861543d3ab2481eddd803adb9db27aecbd2f285a8f519303464f1eb5d6","account_ram_deltas":[{"account":"eosknightsio","delta":133}],"except":null,"trx_status":"executed","createdAt":"2019-03-12T07:58:14.316Z"},{"_id":"5c68d73cb5035b4e796b4089","receipt":{"receiver":"texaspokers1","act_digest":"287514144999fa4bce97d88d261e133a7bfb8ea6424c86c358d73c55a3a0ee8d","global_sequence":"5081087438","recv_sequence":16878,"auth_sequence":[["texaspokers1",16669]],"code_sequence":8,"abi_sequence":8},"act":{"account":"texaspokers1","name":"clearchip","authorization":[{"actor":"texaspokers1","permission":"active"}],"data":{"from":"undefined"},"hex_data":"0000486abaa5d2d4"},"context_free":false,"elapsed":95,"console":"","trx_id":"602d835f2e5bf08af618c5cd9af2f575b52ba63c50ef1b5797ebb94307df8eed","block_num":43187477,"block_time":"2019-02-17T03:38:36.000","producer_block_id":"0292fd1558100fb80d65fb166a25768a563b4c95c634217b15e394adfc204022","account_ram_deltas":[{"account":"texaspokers1","delta":-140}],"except":null,"trx_status":"executed","createdAt":"2019-02-17T03:38:36.355Z"}]}	

12. find the top 10 largest proxies, find the weight of the voice in the top 10 proxies and the weight of the voice in all accounts that vote through a proxy

	https://medium.com/coinmonks/eos-proxy-voting-everything-you-need-to-know-e4c9783249e3
	https://www.alohaeos.com/vote/proxy?sort=rank&sortDir=asc

	
Rank 		Name	Account	Account EOS	Proxied EOS	Total EOS	Proxied Accounts	Candidate Votes
1		The Starkness	madeofstarks	5	14,687,261	14,687,266	57	26
2		Infinity Stones Proxy	infstonespxy	1	5,666,192	5,666,193	1	6
3		Investing with a difference	investingwad	710	3,853,869	3,854,579	2,253	30
4		Brock Pierce Proxy	brockpierce1	0	3,523,379	3,523,379	227	30
5		Luke Stokes	lukeeosproxy	7,282	2,864,130	2,871,412	296	30
6		Colin Talks Crypto	colintcrypto	11	1,898,298	1,898,309	344	30
7		Chintai Proxy	chintaiproxy	10	1,482,290	1,482,300	99	30
8		EOS Cannon Proxy1	cannonproxy1	2	1,386,439	1,386,441	446	20
9		EOS Titan	eostitanvote	4	1,213,834	1,213,838	42	30
10		starteos.io	starteos.io	5,000	1,013,815	1,018,815	694	28 

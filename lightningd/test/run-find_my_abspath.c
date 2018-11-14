#define main unused_main
int unused_main(int argc, char *argv[]);
#include "../../common/base32.c"
#include "../../common/wireaddr.c"
#include "../lightningd.c"
#include "../subd.c"

/* AUTOGENERATED MOCKS START */
/* Generated stub for activate_peers */
void activate_peers(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "activate_peers called!\n"); abort(); }
/* Generated stub for begin_topology */
void begin_topology(struct chain_topology *topo UNNEEDED)
{ fprintf(stderr, "begin_topology called!\n"); abort(); }
/* Generated stub for channel_notify_new_block */
void channel_notify_new_block(struct lightningd *ld UNNEEDED,
			      u32 block_height UNNEEDED)
{ fprintf(stderr, "channel_notify_new_block called!\n"); abort(); }
/* Generated stub for connectd_activate */
void connectd_activate(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "connectd_activate called!\n"); abort(); }
/* Generated stub for connectd_init */
int connectd_init(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "connectd_init called!\n"); abort(); }
/* Generated stub for daemon_poll */
int daemon_poll(struct pollfd *fds UNNEEDED, nfds_t nfds UNNEEDED, int timeout UNNEEDED)
{ fprintf(stderr, "daemon_poll called!\n"); abort(); }
/* Generated stub for daemon_setup */
void daemon_setup(const char *argv0 UNNEEDED,
		  void (*backtrace_print)(const char *fmt UNNEEDED, ...) UNNEEDED,
		  void (*backtrace_exit)(void))
{ fprintf(stderr, "daemon_setup called!\n"); abort(); }
/* Generated stub for daemon_shutdown */
void daemon_shutdown(void)
{ fprintf(stderr, "daemon_shutdown called!\n"); abort(); }
/* Generated stub for db_assert_no_outstanding_statements */
void db_assert_no_outstanding_statements(void)
{ fprintf(stderr, "db_assert_no_outstanding_statements called!\n"); abort(); }
/* Generated stub for db_begin_transaction_ */
void db_begin_transaction_(struct db *db UNNEEDED, const char *location UNNEEDED)
{ fprintf(stderr, "db_begin_transaction_ called!\n"); abort(); }
/* Generated stub for db_close_for_fork */
void db_close_for_fork(struct db *db UNNEEDED)
{ fprintf(stderr, "db_close_for_fork called!\n"); abort(); }
/* Generated stub for db_commit_transaction */
void db_commit_transaction(struct db *db UNNEEDED)
{ fprintf(stderr, "db_commit_transaction called!\n"); abort(); }
/* Generated stub for db_get_intvar */
s64 db_get_intvar(struct db *db UNNEEDED, char *varname UNNEEDED, s64 defval UNNEEDED)
{ fprintf(stderr, "db_get_intvar called!\n"); abort(); }
/* Generated stub for db_reopen_after_fork */
void db_reopen_after_fork(struct db *db UNNEEDED)
{ fprintf(stderr, "db_reopen_after_fork called!\n"); abort(); }
/* Generated stub for fatal */
void   fatal(const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "fatal called!\n"); abort(); }
/* Generated stub for free_htlcs */
void free_htlcs(struct lightningd *ld UNNEEDED, const struct channel *channel UNNEEDED)
{ fprintf(stderr, "free_htlcs called!\n"); abort(); }
/* Generated stub for fromwire_status_fail */
bool fromwire_status_fail(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, enum status_failreason *failreason UNNEEDED, wirestring **desc UNNEEDED)
{ fprintf(stderr, "fromwire_status_fail called!\n"); abort(); }
/* Generated stub for fromwire_status_peer_billboard */
bool fromwire_status_peer_billboard(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, bool *perm UNNEEDED, wirestring **happenings UNNEEDED)
{ fprintf(stderr, "fromwire_status_peer_billboard called!\n"); abort(); }
/* Generated stub for fromwire_status_peer_error */
bool fromwire_status_peer_error(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct channel_id *channel UNNEEDED, wirestring **desc UNNEEDED, struct crypto_state *crypto_state UNNEEDED, u8 **error_for_them UNNEEDED)
{ fprintf(stderr, "fromwire_status_peer_error called!\n"); abort(); }
/* Generated stub for get_log_book */
struct log_book *get_log_book(const struct log *log UNNEEDED)
{ fprintf(stderr, "get_log_book called!\n"); abort(); }
/* Generated stub for gossip_init */
void gossip_init(struct lightningd *ld UNNEEDED, int connectd_fd UNNEEDED)
{ fprintf(stderr, "gossip_init called!\n"); abort(); }
/* Generated stub for handle_early_opts */
void handle_early_opts(struct lightningd *ld UNNEEDED, int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "handle_early_opts called!\n"); abort(); }
/* Generated stub for handle_opts */
void handle_opts(struct lightningd *ld UNNEEDED, int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "handle_opts called!\n"); abort(); }
/* Generated stub for hash_htlc_key */
size_t hash_htlc_key(const struct htlc_key *htlc_key UNNEEDED)
{ fprintf(stderr, "hash_htlc_key called!\n"); abort(); }
/* Generated stub for hsm_init */
void hsm_init(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "hsm_init called!\n"); abort(); }
/* Generated stub for htlcs_notify_new_block */
void htlcs_notify_new_block(struct lightningd *ld UNNEEDED, u32 height UNNEEDED)
{ fprintf(stderr, "htlcs_notify_new_block called!\n"); abort(); }
/* Generated stub for json_escape */
struct json_escaped *json_escape(const tal_t *ctx UNNEEDED, const char *str TAKES UNNEEDED)
{ fprintf(stderr, "json_escape called!\n"); abort(); }
/* Generated stub for load_channels_from_wallet */
void load_channels_from_wallet(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "load_channels_from_wallet called!\n"); abort(); }
/* Generated stub for log_ */
void log_(struct log *log UNNEEDED, enum log_level level UNNEEDED, const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "log_ called!\n"); abort(); }
/* Generated stub for log_backtrace_exit */
void log_backtrace_exit(void)
{ fprintf(stderr, "log_backtrace_exit called!\n"); abort(); }
/* Generated stub for log_backtrace_print */
void log_backtrace_print(const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "log_backtrace_print called!\n"); abort(); }
/* Generated stub for log_prefix */
const char *log_prefix(const struct log *log UNNEEDED)
{ fprintf(stderr, "log_prefix called!\n"); abort(); }
/* Generated stub for log_status_msg */
bool log_status_msg(struct log *log UNNEEDED, const u8 *msg UNNEEDED)
{ fprintf(stderr, "log_status_msg called!\n"); abort(); }
/* Generated stub for new_log */
struct log *new_log(const tal_t *ctx UNNEEDED, struct log_book *record UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "new_log called!\n"); abort(); }
/* Generated stub for new_log_book */
struct log_book *new_log_book(size_t max_mem UNNEEDED,
			      enum log_level printlevel UNNEEDED)
{ fprintf(stderr, "new_log_book called!\n"); abort(); }
/* Generated stub for new_topology */
struct chain_topology *new_topology(struct lightningd *ld UNNEEDED, struct log *log UNNEEDED)
{ fprintf(stderr, "new_topology called!\n"); abort(); }
/* Generated stub for onchaind_replay_channels */
void onchaind_replay_channels(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "onchaind_replay_channels called!\n"); abort(); }
/* Generated stub for plugins_config */
void plugins_config(struct plugins *plugins UNNEEDED)
{ fprintf(stderr, "plugins_config called!\n"); abort(); }
/* Generated stub for plugins_init */
void plugins_init(struct plugins *plugins UNNEEDED)
{ fprintf(stderr, "plugins_init called!\n"); abort(); }
/* Generated stub for plugins_new */
struct plugins *plugins_new(const tal_t *ctx UNNEEDED, struct log_book *log_book UNNEEDED)
{ fprintf(stderr, "plugins_new called!\n"); abort(); }
/* Generated stub for register_opts */
void register_opts(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "register_opts called!\n"); abort(); }
/* Generated stub for setup_color_and_alias */
void setup_color_and_alias(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "setup_color_and_alias called!\n"); abort(); }
/* Generated stub for setup_jsonrpc */
struct jsonrpc *setup_jsonrpc(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "setup_jsonrpc called!\n"); abort(); }
/* Generated stub for setup_topology */
void setup_topology(struct chain_topology *topology UNNEEDED, struct timers *timers UNNEEDED,
		    u32 min_blockheight UNNEEDED, u32 max_blockheight UNNEEDED)
{ fprintf(stderr, "setup_topology called!\n"); abort(); }
/* Generated stub for timer_expired */
void timer_expired(tal_t *ctx UNNEEDED, struct timer *timer UNNEEDED)
{ fprintf(stderr, "timer_expired called!\n"); abort(); }
/* Generated stub for txfilter_add_derkey */
void txfilter_add_derkey(struct txfilter *filter UNNEEDED,
			 const u8 derkey[PUBKEY_DER_LEN])
{ fprintf(stderr, "txfilter_add_derkey called!\n"); abort(); }
/* Generated stub for txfilter_new */
struct txfilter *txfilter_new(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "txfilter_new called!\n"); abort(); }
/* Generated stub for version */
const char *version(void)
{ fprintf(stderr, "version called!\n"); abort(); }
/* Generated stub for wallet_blocks_heights */
void wallet_blocks_heights(struct wallet *w UNNEEDED, u32 def UNNEEDED, u32 *min UNNEEDED, u32 *max UNNEEDED)
{ fprintf(stderr, "wallet_blocks_heights called!\n"); abort(); }
/* Generated stub for wallet_invoice_autoclean */
void wallet_invoice_autoclean(struct wallet * wallet UNNEEDED,
			      u64 cycle_seconds UNNEEDED,
			      u64 expired_by UNNEEDED)
{ fprintf(stderr, "wallet_invoice_autoclean called!\n"); abort(); }
/* Generated stub for wallet_network_check */
bool wallet_network_check(struct wallet *w UNNEEDED,
			  const struct chainparams *chainparams UNNEEDED)
{ fprintf(stderr, "wallet_network_check called!\n"); abort(); }
/* Generated stub for wallet_new */
struct wallet *wallet_new(struct lightningd *ld UNNEEDED,
			  struct log *log UNNEEDED, struct timers *timers UNNEEDED)
{ fprintf(stderr, "wallet_new called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

struct log *crashlog;

#undef main
int main(int argc UNUSED, char *argv[] UNUSED)
{
	setup_locale();

	char *argv0;
	/* We're assuming we're run from top build dir. */
	const char *answer;

	setup_tmpctx();
	answer = path_canon(tmpctx, "lightningd/test/run-find_my_abspath");

	/* Various different ways we could find ourselves. */
	argv0 = path_join(tmpctx,
			  path_cwd(tmpctx), "lightningd/test/run-find_my_abspath");
	unsetenv("PATH");

	/* Absolute path. */
	assert(streq(find_my_abspath(tmpctx, argv0), answer));

	/* Relative to cwd. */
	argv0 = "lightningd/test/run-find_my_abspath";
	assert(streq(find_my_abspath(tmpctx, argv0), answer));

	/* Using $PATH */
	setenv("PATH", path_join(tmpctx,
				 path_cwd(tmpctx), "lightningd/test"), 1);
	argv0 = "run-find_my_abspath";

	assert(streq(find_my_abspath(tmpctx, argv0), answer));

	/* Even with dummy things in path. */
	char **pathelems = tal_arr(tmpctx, char *, 4);
	pathelems[0] = "/tmp/foo";
	pathelems[1] = "/sbin";
	pathelems[2] = path_join(tmpctx, path_cwd(tmpctx), "lightningd/test");
	pathelems[3] = NULL;

	setenv("PATH", tal_strjoin(tmpctx, pathelems, ":", STR_NO_TRAIL), 1);
	assert(streq(find_my_abspath(tmpctx, argv0), answer));

	assert(!taken_any());
	take_cleanup();
	tal_free(tmpctx);
	return 0;
}

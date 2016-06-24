#ifndef MASS_STORAGE_SERVICE_H
#define MASS_STORAGE_SERVICE_H

#include <stdint.h>
#include "services.h"

#define MS_MAX_FILES            50000

SAT_returnState mass_storage_init();

SAT_returnState mass_storage_app(tc_tm_pkt *pkt);

SAT_returnState mass_storage_delete_api(MS_sid sid, uint32_t to, MS_mode mode);

SAT_returnState mass_storage_delete_su_scr(MS_sid sid);

SAT_returnState mass_storage_downlink_api(tc_tm_pkt *pkt, MS_sid sid, uint32_t file) ;

SAT_returnState mass_storage_store_api(MS_sid sid, MS_mode mode, uint8_t *buf, uint16_t *size, uint32_t part);

SAT_returnState mass_storage_report_api(tc_tm_pkt *pkt, MS_sid sid);

SAT_returnState mass_storage_report(MS_sid sid, uint8_t *buf, uint16_t *size, uint32_t *iter);

SAT_returnState mass_storage_report_su_scr(MS_sid sid, uint8_t *buf, uint16_t *size);

SAT_returnState mass_storage_su_checksum_api(MS_sid sid);

SAT_returnState mass_storage_su_load_api(MS_sid sid, uint8_t *buf);


SAT_returnState mass_storage_storeFile(MS_sid sid, uint32_t file, uint8_t *buf, uint16_t *size);

SAT_returnState mass_storage_downlinkLogs(MS_sid sid, MS_mode mode, uint32_t from, uint32_t to, uint8_t *buf, uint16_t *size, uint32_t *part);

SAT_returnState mass_storage_downlinkFile(MS_sid sid, uint32_t file, uint8_t *buf, uint16_t *size);

SAT_returnState mass_storage_getLog(MS_sid sid, uint8_t *fn);

SAT_returnState mass_storage_findLog(MS_sid sid, uint32_t *fn);

SAT_returnState mass_storage_getFileName(uint8_t *fn);

SAT_returnState mass_storage_getFileSizeCount(MS_sid sid);


SAT_returnState mass_storage_crtPkt(tc_tm_pkt **pkt, const uint16_t dest_id, const uint16_t size);

SAT_returnState mass_storage_updatePkt(tc_tm_pkt *pkt, uint16_t size, uint8_t subtype);


SAT_returnState mass_storage_FORMAT();

SAT_returnState mass_storage_dirCheck();

void mass_storage_getState(uint8_t *state);

#endif

// ADS-B Meaasage Frame
#include <stdio.h>
#include <stdint.h>

#pragma pack(1)
typedef struct 
{
	uint8_t cMsgId;
	uint8_t cTrAltStatus:1;
	uint8_t cAddrType:1;
	uint8_t cPrtAddr[3];
	uint8_t cLatitude[3];
	uint8_t cLongitude[3];
	uint16_t sAltitude : 12;
	uint16_t sMnsIndicator : 4;
	uint8_t cNavIntCategory : 4;
	uint8_t cNavAccCategory : 4;
	uint32_t iHorVelocity : 12;
	uint32_t iVerVelocity : 12;
	uint32_t iTrack : 8;
	uint8_t cEmtCategory;
	uint8_t cCallSign[8];
	uint8_t cEmgCode : 4;
	uint8_t cReserved : 4;
}ADS_B;


ADS_B ads = {0x14, };

int main(void)
{
	
	printf("size ==> %d", sizeof(ADS_B));
	return 0;
}

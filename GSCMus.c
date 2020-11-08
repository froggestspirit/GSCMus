#define NR10    0x04000060 //Channel 1 Sweep register (R/W)
#define NR11    0x04000062 //Channel 1 Sound length/Wave pattern duty (R/W)
#define NR12    0x04000063 //Channel 1 Volume Envelope (R/W)
#define NR13    0x04000064 //Channel 1 Frequency lo (Write Only)
#define NR14    0x04000065 //Channel 1 Frequency hi (R/W)

#define NR21    0x04000068 //Channel 2 Sound length/Wave pattern duty (R/W)
#define NR22    0x04000069 //Channel 2 Volume Envelope (R/W)
#define NR23    0x0400006C //Channel 2 Frequency lo (Write Only)
#define NR24    0x0400006D //Channel 2 Frequency hi (R/W)

#define NR30    0x04000070 //Channel 3 Sound on/off (R/W)
#define NR31    0x04000072 //Channel 3 Sound Length
#define NR32    0x04000073 //Channel 3 Select output level (R/W)
#define NR33    0x04000074 //Channel 3 Frequency's lower data (W)
#define NR34    0x04000075 //Channel 3 Frequency's higher data (R/W)
#define WAVRAM  0x04000090 //Wave Pattern RAM

#define NR41    0x04000078 //Channel 4 Sound Length (R/W)
#define NR42    0x04000079 //Channel 4 Volume Envelope (R/W)
#define NR43    0x0400007C //Channel 4 Polynomial Counter (R/W)
#define NR44    0x0400007D //Channel 4 Counter/consecutive; Inital (R/W)

const u8 waveTable[160] = {//the waveforms to choose from, each is 32 bytes, ranging from 0-15. More can be added.
	0x02, 0x46, 0x8A, 0xCE, 0xFF, 0xFE, 0xED, 0xDC, 0xCB, 0xA9, 0x87, 0x65, 0x44, 0x33, 0x22, 0x11,
	0x02, 0x46, 0x8A, 0xCE, 0xEF, 0xFF, 0xFE, 0xEE, 0xDD, 0xCB, 0xA9, 0x87, 0x65, 0x43, 0x22, 0x11,
	0x13, 0x69, 0xBD, 0xEE, 0xEE, 0xFF, 0xFF, 0xED, 0xDE, 0xFF, 0xFF, 0xEE, 0xEE, 0xDB, 0x96, 0x31,
	0x02, 0x46, 0x8A, 0xCD, 0xEF, 0xFE, 0xDE, 0xFF, 0xEE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10,
	0x01, 0x23, 0x45, 0x67, 0x8A, 0xCD, 0xEE, 0xF7, 0x7F, 0xEE, 0xDC, 0xA8, 0x76, 0x54, 0x32, 0x10,
	0x00, 0x11, 0x22, 0x33, 0x44, 0x33, 0x22, 0x11, 0xFF, 0xEE, 0xCC, 0xAA, 0x88, 0xAA, 0xCC, 0xEE,
	0x02, 0x46, 0x8A, 0xCE, 0xCB, 0xA9, 0x87, 0x65, 0xFF, 0xFE, 0xED, 0xDC, 0x44, 0x33, 0x22, 0x11,
    0xC0, 0xA9, 0x87, 0xF5, 0xFF, 0xFE, 0xED, 0xDC, 0x44, 0x33, 0x22, 0xF1, 0x02, 0x46, 0x8A, 0xCE,
	0x44, 0x33, 0x22, 0x1F, 0x00, 0x46, 0x8A, 0xCE, 0xF8, 0xFE, 0xED, 0xDC, 0xCB, 0xA9, 0x87, 0x65,
	0x11, 0x00, 0x00, 0x08, 0x00, 0x13, 0x57, 0x9A, 0xB4, 0xBA, 0xA9, 0x98, 0x87, 0x65, 0x43, 0x21,
};

#define Drum00	    0
#define Snare1	    (Drum00 + 4)
#define Snare2	    (Snare1 + 4)
#define Snare3	    (Snare2 + 4)
#define Snare4  	(Snare3 + 4)
#define Drum05	    (Snare4 + 4)
#define Triangle1	(Drum05 + 19)
#define Triangle2	(Triangle1 + 4)
#define HiHat1	    (Triangle2 + 7)
#define Snare5  	(HiHat1 + 4)
#define Snare6  	(Snare5 + 4)
#define Snare7  	(Snare6 + 4)
#define HiHat2  	(Snare7 + 4)
#define HiHat3  	(HiHat2 + 4)
#define Snare8	    (HiHat3 + 4)
#define Triangle3	(Snare8 + 4)
#define Triangle4	(Triangle3 + 7)
#define Snare9	    (Triangle4 + 7)
#define Snare10	    (Snare9 + 4)
#define Snare11	    (Snare10 + 4)
#define Drum20	    (Snare11 + 4)
#define Drum21	    (Drum20 + 4)
#define Snare12	    (Drum21 + 1)
#define Snare13	    (Snare12 + 4)
#define Snare14	    (Snare13 + 4)
#define Kick1	    (Snare14 + 4)
#define Triangle5	(Kick1 + 7)
#define Drum27	    (Triangle5 + 4)
#define Drum28	    (Drum27 + 4)
#define Drum29	    (Drum28 + 7)
#define Crash1	    (Drum29 + 7)
#define Drum31	    (Crash1 + 7)
#define Drum32	    (Drum31 + 7)
#define Drum33  	(Drum32 + 7)
#define Crash2	    (Drum33 + 4)
#define Drum35	    (Crash2 + 4)
#define Drum36	    (Drum35 + 7)
#define Kick2	    (Drum36 + 7)


const u8 drumTable[78] = {//the drum pointers
    Drum00, Snare1, Snare2, Snare3, Snare4, Drum05, Triangle1, Triangle2, HiHat1, Snare5, Snare6, Snare7, HiHat2,
    Drum00, HiHat1, Snare5, Snare6, Snare7, HiHat2, HiHat3, Snare8, Triangle3, Triangle4, Snare9, Snare10, Snare11,
    Drum00, Snare1, Snare9, Snare10, Snare11, Drum05, Triangle1, Triangle2, HiHat1, Snare5, Snare6, Snare7, HiHat2,
    Drum21, Snare12, Snare13, Snare14, Kick1, Triangle5, Drum20, Drum27, Drum28, Drum29, Drum21, Kick2, Crash2,
    Drum21, Drum20, Snare13, Snare14, Kick1, Drum33, Triangle5, Drum35, Drum31, Drum32, Drum36, Kick2, Crash1,
    Drum00, Snare9, Snare10, Snare11, Drum27, Drum28, Drum29, Drum05, Triangle1, Crash1, Snare14, Snare13, Kick2
};

const u8 drumData[200] = {//the drum data
    0x20, 0x11, 0x00, 0xFF,	 //Drum00
    0x20, 0xC1, 0x33, 0xFF,	 //Snare1
    0x20, 0xB1, 0x33, 0xFF,	 //Snare2
    0x20, 0xA1, 0x33, 0xFF,	 //Snare3
    0x20, 0x81, 0x33, 0xFF,	 //Snare4
    0x27, 0x84, 0x37,	     //Drum05
    0x26, 0x84, 0x36,
    0x25, 0x83, 0x35,
    0x24, 0x83, 0x34,
    0x23, 0x82, 0x33,
    0x22, 0x81, 0x32, 0xFF,
    0x20, 0x51, 0x2A, 0xFF,	 //Triangle1
    0x21, 0x41, 0x2B,	     //Triangle2
    0x20, 0x61, 0x2A, 0xFF,
    0x20, 0x81, 0x10, 0xFF,	 //HiHat1
    0x20, 0x82, 0x23, 0xFF,	 //Snare5
    0x20, 0x82, 0x25, 0xFF,	 //Snare6
    0x20, 0x82, 0x26, 0xFF,	 //Snare7
    0x20, 0xA1, 0x10, 0xFF,	 //HiHat2
    0x20, 0xA2, 0x11, 0xFF,	 //HiHat3
    0x20, 0xA2, 0x50, 0xFF,	 //Snare8
    0x20, 0xA1, 0x18,	     //Triangle3
    0x20, 0x31, 0x33, 0xFF,
    0x22, 0x91, 0x28,	     //Triangle4
    0x20, 0x71, 0x18, 0xFF,
    0x20, 0x91, 0x22, 0xFF,	 //Snare9
    0x20, 0x71, 0x22, 0xFF,	 //Snare10
    0x20, 0x61, 0x22, 0xFF,	 //Snare11
    0x20, 0x11, 0x11, 0xFF,	 //Drum20
    0xFF,	                 //Drum21 (Silent)
    0x20, 0x91, 0x33, 0xFF,	 //Snare12
    0x20, 0x51, 0x32, 0xFF,	 //Snare13
    0x20, 0x81, 0x31, 0xFF,	 //Snare14
    0x20, 0x88, 0x6B,	     //Kick1
    0x20, 0x71, 0x00, 0xFF,
    0x30, 0x91, 0x18, 0xFF,	 //Triangle5
    0x27, 0x92, 0x10, 0xFF,	 //Drum27
    0x33, 0x91, 0x00,   	 //Drum28
    0x33, 0x11, 0x00, 0xFF,
    0x33, 0x91, 0x11,	     //Drum29
    0x33, 0x11, 0x00, 0xFF,
    0x33, 0x88, 0x15,   	 //Crash1
    0x20, 0x65, 0x12, 0xFF,
    0x33, 0x51, 0x21,	     //Drum31
    0x33, 0x11, 0x11, 0xFF,
    0x33, 0x51, 0x50,	     //Drum32
    0x33, 0x11, 0x11, 0xFF,
    0x20, 0xA1, 0x31, 0xFF,	 //Drum33
    0x20, 0x84, 0x12, 0xFF,	 //Crash2
    0x33, 0x81, 0x00,	     //Drum35
    0x33, 0x11, 0x00, 0xFF,
    0x33, 0x81, 0x21,	     //Drum36
    0x33, 0x11, 0x11, 0xFF,
    0x20, 0xA8, 0x6B,	     //Kick2
    0x20, 0x71, 0x00, 0xFF
};

const u16 freqTableGB[72] PROGMEM = {//starting with C3, one for each note the gameboy can handle.
	  44, 156, 262, 363, 457, 547, 631, 710, 786, 854, 923, 986,
	1046,1102,1155,1205,1253,1297,1339,1379,1417,1452,1486,1517,
	1546,1575,1602,1627,1650,1673,1694,1714,1732,1750,1767,1783,
	1798,1812,1825,1837,1849,1860,1871,1881,1890,1899,1907,1915,
	1923,1930,1936,1943,1949,1954,1959,1964,1969,1974,1978,1982,
	1985,1988,1992,1995,1998,2001,2004,2006,2009,2011,2013,2015
};

//GB variables
u8 NR10Period;
bool NR10Negate;
u8 NR10Shift;
u8 NRx1Duty[2];//only the first 2 channels use this
u8 NRx1Length[4];//6-bit for channels 1,2,4. 8-bit for channel 3
u8 NRx2Decay[4];//used for channels 1,2 and 4. channel 4 is index "2", not "3"
u8 NRx2Velocity[4];
u8 NRx2Timer[4];
u8 NRx2Volume[4];
bool NRx2Sign[4];
bool NRx4LenEn[4];//length enable flag
bool NRx4Trigger[4];//Trigger a note
u16 NRxFreq[4];
bool NR43Stage;//15 or 7 stage mode?
u8 NR30DAC;
u8 NR32Volume;
u8 NR43;
u8 NR50;
u8 NR51;
u8 NR52;
bool CHENL[4];
bool CHENR[4];
u8 CHFPos8[4] asm("CHFPos8") __attribute__ ((used)) ;
u16 CHFPos8N asm("CHFPos8N") __attribute__ ((used)) ;
u32 CHFPos[4] asm("CHFPos") __attribute__ ((used)) ;
u32 CHFreq[4] asm("CHFreq") __attribute__ ((used)) ;

//sequencer variables
bool playing;
u16 tempo;
u8 curCommand;
u8 trackLooped[4];//how many times the track looped, for limiting playback to 2 times before changing song
u8 tracksComplete;//bits set for when a channel is ready to fade
u8 fadeTimer;//timer for fading
u16 trackPos[4];//position in the song array of each track
u16 trackRetPos[4];//position in the song array of each track
u16 trackLoopTo[4];
u8 trackLoopNumber[4];
bool trackLooping[4];
u16 trackDelay[4];//time before next event is read
u16 trackTone[4];
u8 trackNote[4];
s8 trackNoteOffset[4];
u8 trackEnvelope[4];
u8 trackSpeed[4];
u8 trackOctave[4];
s32 trackNoteLength[4];
u8 trackArpDuty[4 * 4];
bool trackUseArpDuty[4];
u8 trackVibratoDepth[4];
u8 trackVibratoDepthAdd[4];
u8 trackVibratoDepthSub[4];
u8 trackVibratoSpeed[4];
u8 trackVibratoDelay[4];
u8 trackVibratoDelayTimer[4];
u8 trackVibratoTimer[4];
u8 trackVibratoState[4];
bool trackDone[4];//track is done playing
u8 drumIndex;//where the drumdata array is
u8 drumTimer;//delays for the drums
u8 drumSet;//FF if not initialized

void initPlayer(){//set up the variables for starting a song
	for(int i = 0; i < 4; i++){
		NRx1Length[i] = 0;
		NRx2Decay[i] = 0;
		NRx2Velocity[i] = 0;
		NRx2Timer[i] = 0;
		NRx2Volume[i] = 0;
		NRx2Sign[i] = 0;
		NRx4LenEn[i] = 0;
		NRx4Trigger[i] = 0;
		NRxFreq[i] = 0;
		CHENL[i] = 0;
		CHENR[i] = 0;
		CHFPos[i] = 0;
		CHFreq[i] = 0;
		trackLooped[i] = 0;
 		trackPos[i] = 0;
		trackRetPos[i] = 0;
		trackLoopTo[i] = 0;
		trackLoopNumber[i] = 0xFF;
		trackLooping[i] = false;
		trackDelay[i] = 0;
		trackTone[i] = 0;
		trackNote[i] = 0;
		trackNoteOffset[i] = 0;
		trackEnvelope[i] = 0;
		trackSpeed[i] = 1;
		trackOctave[i] = 0;
		trackNoteLength[i] = 0;
		trackArpDuty[i * 4] = 0;
		trackArpDuty[(i * 4) + 1] = 0;
		trackArpDuty[(i * 4) + 2] = 0;
		trackArpDuty[(i * 4) + 3] = 0;
		trackUseArpDuty[i] = false;
		trackVibratoDepth[i] = 0;
		trackVibratoDepthAdd[i] = 0;
		trackVibratoDepthSub[i] = 0;
		trackVibratoSpeed[i] = 0;
		trackVibratoDelay[i] = 0;
		trackVibratoDelayTimer[i] = 0;
		trackVibratoTimer[i] = 0;
		trackVibratoState[i] = 0;
		trackDone[i] = true;
	}
	NR10Period = 0;
	NR10Negate = 0;
	NR10Shift = 0;
	NRx1Duty[0] = 0;
	NRx1Duty[1] = 0;
	NR30DAC = 1;
	NR32Volume = 0;
	NR43Stage = 0;
	NR43 = 0;
	NR50 = 0;
	NR51 = 0;
	NR52 = 0;
	for(int i = 0; i < 32; i++) WAV[i] = 0;
	drumTimer = 0;
	drumIndex = 0;
	drumSet = 0xFF;
	playing = false;
	tempo = 0x0100;
	fadeTimer = 0x00;
	songFile.seek(SONG_POINTERS + (curSong * 3));
	songAddress = 0;
	songOffset = 0;
	songAddress = (songFile.read());
	songAddress *= (0x4000);
	songAddress += (songFile.read());
	songAddress += (songFile.read()) * 0x100;
	songOffset = (songAddress & 0x3FFF) + 0x4000;
	songAddress -= 0x4000;
	songFile.seek(songAddress);
	curCommand = songFile.read();//(this tells number of channels)
	curCommand = curCommand >> 6;
	curCommand++;
	songFile.seek(songAddress);
	tracksComplete = 0x0F;
	u8 i = 0;
	while(curCommand > 0){
		i = songFile.read();//track number
		i &= 3;
		trackPos[i] = (songFile.read() + (songFile.read() << 8)) - songOffset;
		CHENL[i] = 1;
		CHENR[i] = 1;
		trackDone[i] = false;
		tracksComplete ^= (0x11 << i);
		curCommand--;
	}
}

void writeWAV(u8 index){//copies waveform to the WAV buffer
	for(u8 i = 0; i < 16; i++){
		*(WAVRAM + i) = waveTable[index + i];
	}
}

void executeCommand(u8 channel){//the code to figure out what bytes do what actions
	songFile.seek(trackPos[channel] + songAddress);
	curCommand = songFile.read();
	if(curCommand < 0xD0){//notes
        trackNoteLength[channel] += ((((curCommand & 0x0F) + 1) * trackSpeed[channel]) & 0xFF) * tempo;
		trackVibratoState[channel] |= 2;
		trackVibratoDelayTimer[channel] = trackVibratoDelay[channel];
		if(curCommand > 0x0F){//note
			trackNote[channel] = (curCommand >> 4) - 1;
			NRxFreq[channel] = pgm_read_word_near(freqTableGB + (((7 - trackOctave[channel]) * 12) + trackNote[channel]) + trackNoteOffset[channel]) + trackTone[channel];
			if(channel != 2){
				writeNRx2(channel,trackEnvelope[channel]);
			}else{
				NR32Volume = (trackEnvelope[2] >> 4);
			}
		}else{//rest
			NRxFreq[channel] = 0;
			if(channel != 2){
				writeNRx2(channel,0);
			}else{
				NR32Volume = 0;
			}
		}
	}else{
		switch(curCommand){
			case 0xD0://octave 8
			case 0xD1://octave 7
			case 0xD2://octave 6
			case 0xD3://octave 5
			case 0xD4://octave 4
			case 0xD5://octave 3
			case 0xD6://octave 2
			case 0xD7://octave 1
				trackOctave[channel] = curCommand & 7;
			break;
			case 0xD8://note length  +  intensity
				trackPos[channel]++;
				trackSpeed[channel] = songFile.read();
			case 0xDC://intensity
				trackPos[channel]++;
  				trackEnvelope[channel] = songFile.read();
  				if(channel == 2) writeWAV((trackEnvelope[2] & 0x0F) << 4);
			break;
			case 0xD9://set starting octave
				trackPos[channel]++;
				curCommand = songFile.read();
				trackNoteOffset[channel] = (curCommand & 0x0F) - ((curCommand >> 4) * 12);
			break;
			case 0xDA://tempo
				trackPos[channel]++;
				tempo = (songFile.read() << 8);
				trackPos[channel]++;
				tempo += songFile.read();
			break;
			case 0xDB://duty cycle
				trackPos[channel]++;
				curCommand = songFile.read();
				if(channel < 2){
					NRx1Duty[channel] = (curCommand << 3);
					trackUseArpDuty[channel] = false;
				}
			break;
			case 0xDD://update sound status

			break;
			case 0xDE://sfx duty
				trackPos[channel]++;
				curCommand = songFile.read();
				if(channel < 2){
					trackArpDuty[(channel << 2)] = (curCommand >> 6);
					trackArpDuty[(channel << 2) + 1] = (curCommand >> 4) & 3;
					trackArpDuty[(channel << 2) + 2] = (curCommand >> 2) & 3;
					trackArpDuty[(channel << 2) + 3] = (curCommand & 3);
					trackUseArpDuty[channel] = true;
				}
			break;
			case 0xDF://sound on/off

			break;
			case 0xE0://pitch wheel
				trackPos[channel]++;
				songFile.read();
				trackPos[channel]++;
				songFile.read();
			break;
			case 0xE1://vibrato
				trackPos[channel]++;
				trackVibratoDelay[channel] = trackVibratoDelayTimer[channel] = songFile.read();
				trackPos[channel]++;
				curCommand = songFile.read();
				trackVibratoSpeed[channel] = (curCommand & 0x0F);
				trackVibratoDepth[channel] = trackVibratoTimer[channel] = (curCommand >> 4);
				trackVibratoDepthAdd[channel] = trackVibratoDepthSub[channel] = (trackVibratoDepth[channel] >> 1);
				trackVibratoDepthAdd[channel] += (curCommand & 1);//increase this if the mod was an odd number
			break;
			case 0xE2://unused

			break;
			case 0xE3://music noise sampling
				trackPos[channel]++;
			break;
			case 0xE4://force panning
				trackPos[channel]++;
			break;
			case 0xE5://volume
				trackPos[channel]++;
			break;
			case 0xE6://tone
				trackPos[channel]++;
				trackTone[channel] = (songFile.read() << 8);
				trackPos[channel]++;
				trackTone[channel] += songFile.read();
			break;
			case 0xE7://unused

			break;
			case 0xE8://unused

			break;
			case 0xE9://global tempo
				trackPos[channel]++;
				tempo += (songFile.read() << 8);
				trackPos[channel]++;
				tempo += songFile.read();

			break;
			case 0xEA://restart current channel from header

			break;
			case 0xEB://new song

			break;
			case 0xEC://sfx priority on

			break;
			case 0xED://sfx priority off

			break;
			case 0xEE://unused

			break;
			case 0xEF://stereo panning
				trackPos[channel]++;
				songFile.read();
			break;
			case 0xF0://sfx noise sampling

			break;
			case 0xF1://nothing

			break;
			case 0xF2://nothing

			break;
			case 0xF3://nothing

			break;
			case 0xF4://nothing

			break;
			case 0xF5://nothing

			break;
			case 0xF6://nothing

			break;
			case 0xF7://nothing

			break;
			case 0xF8://nothing

			break;
			case 0xF9://unused

			break;
			case 0xFA://setcondition

			break;
			case 0xFB://jumpif

			break;
			case 0xFC://jump
				trackPos[channel]++;
				trackLoopTo[channel] = songFile.read();
				trackPos[channel]++;
				trackLoopTo[channel] += (songFile.read() << 8) - (songOffset + 1);
				trackPos[channel] = trackLoopTo[channel];
			break;
			case 0xFD://loop
				trackPos[channel]++;
				curCommand = songFile.read();
				if(!trackLooping[channel]){
					trackLoopNumber[channel] = curCommand;
					if(trackLoopNumber[channel] > 0) trackLooping[channel] = true;//don't set if it's an infinite loop
				}
				trackPos[channel]++;
				trackLoopTo[channel] = songFile.read();
				trackPos[channel]++;
				trackLoopTo[channel] += (songFile.read() << 8) - (songOffset + 1);
				trackLoopNumber[channel]--;
				if(!trackLooping[channel]){//infinite loop
					trackPos[channel] = trackLoopTo[channel];
					trackLooped[channel]++;
					if(trackLooped[channel] == 2) tracksComplete |= (1 << channel);
				}else if(trackLoopNumber[channel] > 0){
					trackPos[channel] = trackLoopTo[channel];
				}else{
					trackLooping[channel] = false;
				}
			break;
			case 0xFE://call
				trackPos[channel]++;
				trackLoopTo[channel] = songFile.read();
				trackPos[channel]++;
				trackLoopTo[channel] += (songFile.read() << 8) - (songOffset + 1);
				trackRetPos[channel] = trackPos[channel];
				trackPos[channel] = trackLoopTo[channel];
			break;
			case 0xFF://return
				if(trackRetPos[channel] > 0){
					trackPos[channel] = trackRetPos[channel];
					trackRetPos[channel] = 0;
				}else{
					trackDone[channel] = true;
					CHENL[channel] = CHENR[channel] = 0;
					tracksComplete |= (0x11 << channel);
				}
			break;
		}
	}
	trackPos[channel]++;
}

void executeCommandNSE(){//the code to figure out what bytes do what actions in noise channel
	songFile.seek(trackPos[3] + songAddress);
	curCommand = songFile.read();
	if(curCommand < 0xD0){//notes
		trackNoteLength[3] += ((((curCommand & 0x0F) + 1) * trackSpeed[3]) & 0xFF) * tempo;
		if(curCommand > 0x0F){//note
			trackNote[3] = (curCommand >> 4);
			drumTimer = 0;
			drumIndex = drumTable[(drumSet * 13) + trackNote[3]];
			NRxFreq[3] = 0;
		}else{//rest
			NRxFreq[3] = 0xFFFF;
			writeNRx2(2,0);
		}
	}else{
		switch(curCommand){
			case 0xD0://octave 8
			case 0xD1://octave 7
			case 0xD2://octave 6
			case 0xD3://octave 5
			case 0xD4://octave 4
			case 0xD5://octave 3
			case 0xD6://octave 2
			case 0xD7://octave 1
			break;
			case 0xD8://note length  +  intensity
				trackPos[3]++;
				trackSpeed[3] = songFile.read();
			case 0xDC://intensity
			break;
			case 0xD9://set starting octave
				trackPos[3]++;
			break;
			case 0xDA://tempo
				trackPos[3]++;
				tempo = (songFile.read() << 8);
				trackPos[3]++;
				tempo += songFile.read();
			break;
			case 0xDB://duty cycle
				trackPos[3]++;;
			break;
			case 0xDD://update sound status

			break;
			case 0xDE://sfx duty
				trackPos[3]++;
			break;
			case 0xDF://sound on/off

			break;
			case 0xE0://pitch wheel
				trackPos[3]++;
				trackPos[3]++;
			break;
			case 0xE1://vibrato
				trackPos[3]++;
				trackPos[3]++;
			break;
			case 0xE2://unused

			break;
			case 0xE3://music noise sampling
				trackPos[3]++;
				if(drumSet < 0xFE) drumSet = 0xFE;
				if(drumSet == 0xFF) drumSet = songFile.read();
			break;
			case 0xE4://force panning
				trackPos[3]++;
			break;
			case 0xE5://volume
				trackPos[3]++;
			break;
			case 0xE6://tone
				trackPos[3]++;
				trackPos[3]++;
			break;
			case 0xE7://unused

			break;
			case 0xE8://unused

			break;
			case 0xE9://global tempo
				trackPos[3]++;
				tempo += (songFile.read() << 8);
				trackPos[3]++;
				tempo += songFile.read();

			break;
			case 0xEA://restart current channel from header

			break;
			case 0xEB://new song

			break;
			case 0xEC://sfx priority on

			break;
			case 0xED://sfx priority off

			break;
			case 0xEE://unused

			break;
			case 0xEF://stereo panning
				trackPos[3]++;
				songFile.read();
			break;
			case 0xF0://sfx noise sampling

			break;
			case 0xF1://nothing

			break;
			case 0xF2://nothing

			break;
			case 0xF3://nothing

			break;
			case 0xF4://nothing

			break;
			case 0xF5://nothing

			break;
			case 0xF6://nothing

			break;
			case 0xF7://nothing

			break;
			case 0xF8://nothing

			break;
			case 0xF9://unused

			break;
			case 0xFA://setcondition

			break;
			case 0xFB://jumpif

			break;
			case 0xFC://jump
				trackPos[3]++;
				trackLoopTo[3] = songFile.read();
				trackPos[3]++;
				trackLoopTo[3] += (songFile.read() << 8) - (songOffset + 1);
				trackPos[3] = trackLoopTo[3];
			break;
			case 0xFD://loop
				trackPos[3]++;
				curCommand = songFile.read();
				if(!trackLooping[3]){
					trackLoopNumber[3] = curCommand;
					if(trackLoopNumber[3] > 0) trackLooping[3] = true;//don't set if it's an infinite loop
				}
				trackPos[3]++;
				trackLoopTo[3] = songFile.read();
				trackPos[3]++;
				trackLoopTo[3] += (songFile.read() << 8) - (songOffset + 1);
				trackLoopNumber[3]--;
				if(!trackLooping[3]){//infinite loop
					trackPos[3] = trackLoopTo[3];
					trackLooped[3]++;
					if(trackLooped[3] == 2) tracksComplete |= (8);
				}else if(trackLoopNumber[3] > 0){
					trackPos[3] = trackLoopTo[3];
				}else{
					trackLooping[3] = false;
				}
			break;
			case 0xFE://call
				trackPos[3]++;
				trackLoopTo[3] = songFile.read();
				trackPos[3]++;
				trackLoopTo[3] += (songFile.read() << 8) - (songOffset + 1);
				trackRetPos[3] = trackPos[3];
				trackPos[3] = trackLoopTo[3];
			break;
			case 0xFF://return
				if(trackRetPos[3] > 0){
					trackPos[3] = trackRetPos[3];
					trackRetPos[3] = 0;
				}else{
					trackDone[3] = true;
					CHENL[3] = CHENR[3] = 0;
					tracksComplete |= (0x88);
				}
			break;
		}
	}
	trackPos[3]++;
}

void playerProcess(u8 channel){//main engine code
	while(trackNoteLength[channel] <= 0) executeCommand(channel);
	if(NRxFreq[channel] > 0){
		if(trackVibratoDepth[channel] > 0){
			if(trackVibratoDelayTimer[channel] == 0){
				if(trackVibratoTimer[channel] == 0){
					trackVibratoTimer[channel] = trackVibratoSpeed[channel];
					trackVibratoState[channel] ^= 1;
					if(trackVibratoState[channel] == 0){
						NRxFreq[channel] += trackVibratoDepth[channel];
					}else if(trackVibratoState[channel] == 1){
						NRxFreq[channel] -= trackVibratoDepth[channel];
					}else if(trackVibratoState[channel] == 2){
						NRxFreq[channel] += trackVibratoDepthAdd[channel];
						trackVibratoState[channel] = 0;
					}else{
						NRxFreq[channel] -= trackVibratoDepthSub[channel];
						trackVibratoState[channel] = 1;
					}
				}else{
					trackVibratoTimer[channel]--;
				}
			}else{
				trackVibratoDelayTimer[channel]--;
			}
		}
  		NRxFreq[channel] &  = 0x7FF;
  		CHFreq[channel] = getFreq(NRxFreq[channel]);
	}
	trackNoteLength[channel] -= 0x100;
}

void playerProcessNSE(){//main engine code for noise channel
	while(trackNoteLength[3] <= 0) executeCommandNSE();
	if(NRxFreq[3] < 0xFFFF){
		if(drumTimer == 0){
			if(drumData[drumIndex] < 0xFF){
				drumTimer = (drumData[drumIndex++] & 0xF);
				trackEnvelope[2] = drumData[drumIndex++];
				writeNRx2(2,trackEnvelope[2]);
				NRxFreq[3] = drumData[drumIndex++];
				NR43Stage = NRxFreq[3] & 8;
				CHFreq[3] = getNSEFreq(NRxFreq[3]);
			}else{
				NRxFreq[3] = 0xFFFF;
			}
		}else{
			drumTimer--;
		}
	}
	trackNoteLength[3] -= 0x100;
}

void loop(){// called at ~60Hz
    //sequencer code
    for(u8 i = 0; i < 3; i++){
        if(!trackDone[i]){
            playerProcess(i);
        }
    }
    if(!trackDone[3]){
        playerProcessNSE();
    }
}
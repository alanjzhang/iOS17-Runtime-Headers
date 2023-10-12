/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogEnumeratorCatalogSubchunk : NSObject <_OSLogIndexTimeRangable> {
    _OSLogEnumeratorCatalog * _catalog;
    NSMutableDictionary * _decompressedChunks;
    unsigned long long  _et;
    unsigned long long  _ot;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    struct catalog_subchunk_s { struct { struct catalog_subchunk_s {} *x_1_1_1; struct catalog_subchunk_s {} **x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; struct hashtable {} *x6; struct hashtable {} *x7; } * _subchunk;
}

@property (nonatomic, readonly) _OSLogEnumeratorCatalog *catalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_decompressedBufferForChunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 subchunk:(struct catalog_subchunk_s { struct { struct catalog_subchunk_s {} *x_1_1_1; struct catalog_subchunk_s {} **x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; struct hashtable {} *x6; struct hashtable {} *x7; }*)arg2;
- (id)catalog;
- (unsigned long long)endTime;
- (long long)endTimeCompare:(id)arg1;
- (void)enumerateChunksUsingBlock:(id /* block */)arg1;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s { struct { struct catalog_subchunk_s {} *x_1_1_1; struct catalog_subchunk_s {} **x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; struct hashtable {} *x6; struct hashtable {} *x7; }*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s { struct { struct catalog_subchunk_s {} *x_1_1_1; struct catalog_subchunk_s {} **x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; struct hashtable {} *x6; struct hashtable {} *x7; }*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;
- (unsigned long long)oldestTime;
- (long long)oldestTimeCompare:(id)arg1;

@end

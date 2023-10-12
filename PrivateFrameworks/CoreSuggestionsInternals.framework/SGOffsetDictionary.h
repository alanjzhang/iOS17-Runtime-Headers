/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGOffsetDictionary : NSObject {
    struct { unsigned long long x1; unsigned short x2; BOOL x3[3]; } * _carrierEntries;
    unsigned short  _count;
    struct { unsigned long long x1; unsigned short x2; BOOL x3[3]; } * _mruCarrierEntry;
    unsigned long long  _payloadOffset;
    unsigned long long  _sizeFactor;
    unsigned long long  _totalPayloadSize;
}

- (struct { unsigned long long x1; unsigned short x2; BOOL x3[3]; }*)carrierEntryForKey:(const char *)arg1;
- (void)dealloc;
- (id)fullMappingFromFile:(id)arg1;
- (id)initWithFilehandle:(id)arg1 sizeFactor:(unsigned long long)arg2 keyLength:(int)arg3 singleByteOffset:(bool)arg4;
- (int)payloadCountForKey:(const char *)arg1;
- (unsigned long long)payloadLengthForKey:(const char *)arg1;
- (unsigned long long)seekLocationForKey:(const char *)arg1;
- (id)stringValueForKey:(const char *)arg1 fromFile:(id)arg2;

@end
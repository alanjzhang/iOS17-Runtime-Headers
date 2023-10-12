/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceFreeSpaceReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _freedBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long freedBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (unsigned long long)freedBytes;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setFreedBytes:(unsigned long long)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService
 */

@interface OPTTSTTSReplacement : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TTSReplacement { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *original;
@property (nonatomic, readonly) NSString *replacement;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSReplacement> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSReplacement { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSReplacement { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)original;
- (id)replacement;

@end

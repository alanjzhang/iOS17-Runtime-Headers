/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAudioData : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSData *audioBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUIAudioDescription *decoderStreamDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIAudioDescription *playerStreamDescription;
@property (readonly) Class superclass;

+ (id)audioData;
+ (id)audioDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioBuffer;
- (id)decoderStreamDescription;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playerStreamDescription;
- (void)setAudioBuffer:(id)arg1;
- (void)setDecoderStreamDescription:(id)arg1;
- (void)setPlayerStreamDescription:(id)arg1;

@end

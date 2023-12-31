/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalIntelligenceCore.framework/PersonalIntelligenceCore
 */

@interface PersonalIntelligenceCore.MetricMessage : NSObject <BMStoreData> {
    void $__lazy_storage_$_codableArray;
    void backend;
    void dataVersion;
    void messageContents;
    void messageIdentifier;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) NSString *description;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)init;
- (id)json;
- (id)serialize;

@end

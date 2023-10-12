/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer> {
    EKEventStore * _eventStore;
    NSString * _version;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)deserializeData:(id)arg1 isNew:(id*)arg2 error:(id*)arg3;
- (id)eventStore;
- (id)initWithEventStore:(id)arg1 withVersion:(id)arg2;
- (id)serializeEvent:(id)arg1 error:(id*)arg2;
- (id)version;
- (id)versionFromData:(id)arg1 error:(id*)arg2;

@end
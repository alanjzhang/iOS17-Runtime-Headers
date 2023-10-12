/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken> {
    EKEventStore * _eventStore;
    unsigned int  _token;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned int token;

- (void).cxx_destruct;
- (void)cancel;
- (id)eventStore;
- (id)initWithEventStore:(id)arg1 token:(int)arg2;
- (unsigned int)token;

@end
/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

@interface SGMessagePair : NSObject {
    NSString * _handle;
    NSString * _prompt;
    NSString * _reply;
    NSDate * _sentAt;
}

@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic, retain) NSString *reply;
@property (nonatomic, retain) NSDate *sentAt;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4;
- (id)prompt;
- (id)reply;
- (id)sentAt;
- (void)setHandle:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setSentAt:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSharingCloseMessage : NSObject <CATSharingContentMessage> {
    NSError * _closeError;
}

@property (nonatomic, readonly) NSError *closeError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageType;
@property (readonly) Class superclass;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)closeError;
- (id)dictionaryValue;
- (id)initWithError:(id)arg1;
- (long long)messageType;

@end

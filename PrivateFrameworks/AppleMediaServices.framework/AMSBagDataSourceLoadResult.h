/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagDataSourceLoadResult : NSObject {
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _loadedBagIdentifier;
    NSString * _loadedBagPartialIdentifier;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *loadedBagIdentifier;
@property (nonatomic, readonly) NSString *loadedBagPartialIdentifier;

- (void).cxx_destruct;
- (id)data;
- (id)expirationDate;
- (id)initWithData:(id)arg1 expirationDate:(id)arg2 loadedBagIdentifier:(id)arg3 loadedBagPartialIdentifier:(id)arg4;
- (id)loadedBagIdentifier;
- (id)loadedBagPartialIdentifier;

@end

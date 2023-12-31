/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary * _suspensionInfoDictionary;
}

@property (getter=isFamilySuspended, nonatomic, readonly) bool familySuspended;
@property (getter=isiCloudSuspended, nonatomic, readonly) bool iCloudSuspended;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isFamilySuspended;
- (bool)isiCloudSuspended;

@end

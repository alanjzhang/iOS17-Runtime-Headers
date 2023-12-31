/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDictionaryResponse : NSObject <NSCopying> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSNumber *failureType;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (getter=isSupportedProtocolVersion, nonatomic, readonly) bool supportedProtocolVersion;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

- (void).cxx_destruct;
- (id)_copyAccount;
- (id)_valueForProtocolKey:(id)arg1;
- (id)actions;
- (id)actionsWithActionType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)failureType;
- (id)init;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isSupportedProtocolVersion;
- (id)pingURLs;
- (id)responseDictionary;
- (id)versionMismatchURL;

@end

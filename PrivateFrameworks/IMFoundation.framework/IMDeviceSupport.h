/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDeviceSupport : NSObject {
    NSString * _buildVersion;
    NSRecursiveLock * _lock;
    NSString * _model;
    NSString * _productName;
    NSString * _productVersion;
}

@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSString *userAgentString;

+ (id)marketingNameForModel:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_generateProductInformation;
- (id)deviceInformationString;
- (id)init;
- (id)model;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)userAgentString;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLMiLoDebugResponse : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    CLMiLoExportDatabaseTableResult * _exportDatabaseTablesResult;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) CLMiLoExportDatabaseTableResult *exportDatabaseTablesResult;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)exportDatabaseTablesResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithExportDatabaseTablesResult:(id)arg1 requestIdentifier:(id)arg2 error:(id)arg3;
- (id)requestIdentifier;

@end

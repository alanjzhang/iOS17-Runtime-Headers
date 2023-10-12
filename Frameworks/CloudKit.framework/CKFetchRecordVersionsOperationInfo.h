/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _desiredKeys;
    NSString * _minimumVersionETag;
    NSArray * _recordIDs;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic, retain) NSString *minimumVersionETag;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) bool shouldFetchAssetContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)minimumVersionETag;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns {
    NSString * _modelClassName;
    int  _modelClassNameOffset;
}

@property (nonatomic, readonly) NSString *modelClassName;
@property (nonatomic, readonly) int modelClassNameOffset;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2;
- (id)modelClassName;
- (int)modelClassNameOffset;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject {
    HMBModelField * _modelField;
    NSString * _name;
    int  _offset;
}

@property (nonatomic, readonly) HMBModelField *modelField;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int offset;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;
- (id)modelField;
- (id)name;
- (int)offset;

@end

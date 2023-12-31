/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITraitStorage : NSObject <NSCoding> {
    NSString * _keyPath;
    id  _object;
    NSMutableArray * _records;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)addRecord:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;
- (id)keyPath;
- (id)object;
- (id)records;

@end

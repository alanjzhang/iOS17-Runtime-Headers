/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding> {
    bool  _createIfNeeded;
    REMObjectID * _objectID;
    NSString * _smartListType;
}

@property (nonatomic) bool createIfNeeded;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) NSString *smartListType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmartListType:(id)arg1 objectID:(id)arg2 createIfNeeded:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)objectID;
- (void)setCreateIfNeeded:(bool)arg1;
- (id)smartListType;

@end

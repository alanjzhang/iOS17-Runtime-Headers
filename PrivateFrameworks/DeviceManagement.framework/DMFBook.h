/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFBook : NSObject <NSCopying, NSSecureCoding> {
    NSString * _author;
    NSNumber * _iTunesStoreID;
    NSString * _persistentID;
    unsigned long long  _state;
    NSString * _title;
    unsigned long long  _type;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *author;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreID;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)author;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iTunesStoreID;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(id)arg1 iTunesStoreID:(id)arg2 author:(id)arg3 title:(id)arg4 version:(id)arg5 type:(unsigned long long)arg6 state:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)persistentID;
- (unsigned long long)state;
- (id)title;
- (unsigned long long)type;
- (id)version;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STFamily : NSObject <NSCopying> {
    NSString * _dataSource;
    STFamilyMember * _me;
    NSArray * _members;
}

@property (nonatomic, copy) NSString *dataSource;
@property (nonatomic, retain) STFamilyMember *me;
@property (nonatomic, copy) NSArray *members;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)dictionaryRepresentation;
- (id)initWithFamilyCircle:(id)arg1;
- (id)initWithMembers:(id)arg1;
- (id)me;
- (id)members;
- (void)setDataSource:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setMembers:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropertySearchItem : CoreDAVItem {
    NSString * _match;
    NSString * _matchTypeAttribute;
    CoreDAVLeafItem * _prop;
}

@property (nonatomic, retain) NSString *match;
@property (nonatomic, retain) NSString *matchTypeAttribute;
@property (nonatomic, retain) CoreDAVLeafItem *prop;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2;
- (id)match;
- (id)matchTypeAttribute;
- (id)prop;
- (void)setMatch:(id)arg1;
- (void)setMatchTypeAttribute:(id)arg1;
- (void)setProp:(id)arg1;
- (void)write:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

// CoreDAVPropertySearchItem (CalDAVPrincipalSearchSupport)

- (int)wellKnownPrincipalSearchType;

@end
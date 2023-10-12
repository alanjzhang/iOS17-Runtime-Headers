/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {
    NSMutableSet * _calendarChanges;
    bool  _content;
    CoreDAVItem * _prop;
}

@property (nonatomic, retain) NSMutableSet *calendarChanges;
@property (nonatomic) bool content;
@property (nonatomic, retain) CoreDAVItem *prop;

- (void).cxx_destruct;
- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (id)calendarChanges;
- (bool)content;
- (id)copyParseRules;
- (id)init;
- (id)prop;
- (void)setCalendarChanges:(id)arg1;
- (void)setContent:(bool)arg1;
- (void)setProp:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFocusRingClientState : NSObject {
    NSMutableArray * _activeFocusLayers;
    NSMapTable * _activeFocusLayersToItems;
    NSString * _clientID;
    <UIFocusItem> * _currentFocusItem;
}

@property (nonatomic, retain) NSMutableArray *activeFocusLayers;
@property (nonatomic, retain) NSMapTable *activeFocusLayersToItems;
@property (nonatomic, retain) NSString *clientID;
@property (nonatomic) <UIFocusItem> *currentFocusItem;

- (void).cxx_destruct;
- (id)activeFocusLayers;
- (id)activeFocusLayersToItems;
- (id)clientID;
- (id)currentFocusItem;
- (id)description;
- (id)initWithClientID:(id)arg1;
- (void)setActiveFocusLayers:(id)arg1;
- (void)setActiveFocusLayersToItems:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setCurrentFocusItem:(id)arg1;

@end

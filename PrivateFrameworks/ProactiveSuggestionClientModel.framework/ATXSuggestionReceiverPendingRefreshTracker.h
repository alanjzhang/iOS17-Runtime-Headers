/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject {
    NSMutableSet * _clientModelsThatUpdatedSuggestions;
    NSMutableDictionary * _registeredDelegatesForClientModels;
    NSMutableDictionary * _requestUUIDToClientModelCaches;
    bool  _shouldForceRefreshForAllUIs;
}

@property (nonatomic, retain) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic, retain) NSMutableDictionary *registeredDelegatesForClientModels;
@property (nonatomic, retain) NSMutableDictionary *requestUUIDToClientModelCaches;
@property (nonatomic) bool shouldForceRefreshForAllUIs;

- (void).cxx_destruct;
- (id)clientModelsThatUpdatedSuggestions;
- (id)init;
- (id)registeredDelegatesForClientModels;
- (id)requestUUIDToClientModelCaches;
- (void)setClientModelsThatUpdatedSuggestions:(id)arg1;
- (void)setRegisteredDelegatesForClientModels:(id)arg1;
- (void)setRequestUUIDToClientModelCaches:(id)arg1;
- (void)setShouldForceRefreshForAllUIs:(bool)arg1;
- (bool)shouldForceRefreshForAllUIs;

@end

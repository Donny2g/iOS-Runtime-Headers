/* Generated by RuntimeBrowser.
 */

@protocol MPUActionTableViewDataSource <UITableViewDataSource>

@required

+ (NSArray *)actionCellConfigurationClasses;

- (Class)cellConfigurationForIndexPath:(NSIndexPath *)arg1;
- (int)numberOfActionRowsInTableView:(UITableView *)arg1;
- (void)reloadActionRowsAnimated:(BOOL)arg1;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;

@end

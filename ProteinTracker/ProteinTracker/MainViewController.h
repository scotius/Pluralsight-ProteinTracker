//
//  XYZViewController.h
//  ProteinTracker
//
//  Created by Scott on 15/07/2014.
//  Copyright (c) 2014 Scott O'Halloran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HistoryViewController.h"

@interface MainViewController : UIViewController{
int total;
    NSMutableArray *amountHistory;
}

@property (weak, nonatomic) IBOutlet UILabel *totalLabel;
@property (weak, nonatomic) IBOutlet UILabel *goalLabel;
@property (weak, nonatomic) IBOutlet UITextField *amountText;
- (IBAction)addProtein:(id)sender;
- (IBAction)unwindToMain:(UIStoryboardSegue *) segue;

@end
